function sumar(arr){
    let suma = 0;
    arr.forEach((e) => {
        suma += e;
    })
    console.log(`La suma es ${suma}`)
}

var my_arr = [1,2,3,4,5,6];

sumar(my_arr)