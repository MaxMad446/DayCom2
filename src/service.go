package main

// Auto-generated | 2026-05-11T22:47:50.659311
import "fmt"

func Process_637() int {
    base := 287
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
