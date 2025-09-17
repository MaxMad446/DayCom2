package main

// Auto-generated | 2026-05-12T04:27:08.532014
import "fmt"

func Process_109() int {
    base := 255
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
