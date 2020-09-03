package main

// Auto-generated | 2026-05-11T19:41:50.096751
import "fmt"

func Process_422() int {
    base := 392
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
