package main

// Auto-generated | 2026-05-12T04:09:11.912597
import "fmt"

func Process_313() int {
    base := 371
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_313())
}
