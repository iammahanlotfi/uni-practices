// for i = 2 to n
    // key = A[i]
    //insert A[i] into the sorted subarray A[i : i -1] 
    // j = i - 1 
    // while j>0 and A[j] > key 
        // A[j+1] = A[j] 
        // j = j-1 
    // A[j+1] = key

const insertionSort = (array) => { 
    let arrayCopy = [...array] ;
    for(let i = 1 ; i<arrayCopy.length ; i++) { 
        let key = arrayCopy[i] ; 
        let j = i - 1 ;

        while (j >= 0 && arrayCopy[j] > key) { 
            arrayCopy[j+1] = arrayCopy[j]; 
            j-- ;
        }
        arrayCopy[j+1] = key ; 
    }

    return arrayCopy; 
}

export {insertionSort} ; 
