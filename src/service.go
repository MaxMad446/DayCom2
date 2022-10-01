package main

// Auto-generated | 2026-05-14T06:21:12.023602
import "fmt"

func Process_202() int {
    base := 479
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
