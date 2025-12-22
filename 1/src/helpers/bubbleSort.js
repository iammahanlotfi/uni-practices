const bubbleSort = (array) => { 
    let n = array.length ; 
    let arrayCopy = [...array]; 
    
    for (let i = 0 ; i< n-1 ; i++ ) { 
        for (let j = 0 ; j<n-i-1; j++) { 
            if (arrayCopy[j] > arrayCopy[j+1]) { 
                [arrayCopy[j] , arrayCopy[j+1]] = [arrayCopy[j+1] , arrayCopy[j]]; 
            }
        }
    }

    return arrayCopy ; 

}


export {bubbleSort} ; 
