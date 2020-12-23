package main

// Auto-generated | 2026-05-11T19:56:25.680944
import "fmt"

func Process_879() int {
    base := 428
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
