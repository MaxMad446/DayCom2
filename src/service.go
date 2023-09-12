package main

// Auto-generated | 2026-05-11T22:06:08.611501
import "fmt"

func Process_846() int {
    base := 495
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_846())
}
