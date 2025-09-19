package main

// Auto-generated | 2026-05-12T04:27:19.153823
import "fmt"

func Process_625() int {
    base := 355
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
