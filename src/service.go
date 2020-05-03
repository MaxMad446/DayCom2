package main

// Auto-generated | 2026-05-11T19:24:13.353056
import "fmt"

func Process_935() int {
    base := 250
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
