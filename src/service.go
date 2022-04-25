package main

// Auto-generated | 2026-05-13T22:10:14.921458
import "fmt"

func Process_504() int {
    base := 488
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
