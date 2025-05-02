package main

import (
	"C"
	"fmt"
)

type Vertex struct {
	Lat, Long float64
}

var m = map[string]Vertex{
	"Labz" : {
		1.54, 6.74,
	},
	"jhansi" : {
		56.85, 74.74,
	},
}

func main() {
	// s := make([]int, 5) // all 10 values are 0.
	// fmt.Println(s)

	// for i, _ := range s { //first var is index, second is value. Here value is ignored bcs of _ and
	// 	// index i is printed. omit the second var _ here bcs we are already getting only index anyway.
	// 	// leaving here for understanding
	// 	i+=1
	// 	fmt.Println(i)
	// }

	// fmt.Println("******now ignoring index******")

	// for _, i := range s { //first var is index, second is value. Here index is ignored bcs of _ and
	// 	// value i is printed (they are all 0)
	// 	fmt.Println(i)
	// }

	fmt.Println(m)

}
