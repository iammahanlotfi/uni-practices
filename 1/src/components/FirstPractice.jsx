import { useState } from "react"
import { bubbleSort } from "../helpers/bubbleSort";
import { insertionSort } from "../helpers/insertionSort";
import styles from "./FirstPractice.module.css" ;

import { BarChart, Bar, XAxis, YAxis, CartesianGrid, Tooltip, Legend, ResponsiveContainer } from "recharts";

function FirstPractice() {

    const [data , setData] = useState([]); 
  

    const clickHandler = () => { 
        const size = 10000; 
        const array = Array.from({length : size} , ()  => Math.floor(Math.random() * 10000)) ; 
      
        // This is for buuble sort: 
        const startBubble = performance.now() ; 
        bubbleSort(array) ; 
        const endBubble = performance.now() ; 

        const bubbleTime= endBubble - startBubble ; 

        // This is for insertion sort: 

        const startInsertion = performance.now(); 
        insertionSort(array) ; 
        const endInsertion = performance.now() ;

        const insertionTime = endInsertion - startInsertion ; 

        setData ([
          {name : "Bubble Sort" , time : (bubbleTime).toFixed(2)} , 
          {name : "Insertion Sort" , time : (insertionTime).toFixed(2)} , 
        ]); 
  }; 


  return (
    <div className={styles.container} >
          <div>
            <button onClick={clickHandler} >
                Calculation
            </button>

            {data.length > 0 && (
                   <ResponsiveContainer width="80%" height={300}>
              <BarChart data={data} margin={{ top: 20, right: 30, left: 0, bottom: 5 }}>
                <CartesianGrid strokeDasharray="3" />
                <XAxis dataKey="name" />
                <YAxis label={{ value: 'Time (ms)', angle: -90, position: 'insideLeft' }} />
                <Tooltip />
                <Legend />
                <Bar dataKey="time" fill="#FA9923" />
              </BarChart>
            </ResponsiveContainer>
            )}
          </div>
    </div>
  )
}

export default FirstPractice ; 
