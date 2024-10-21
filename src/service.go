package main

// Auto-generated | 2026-05-12T03:43:30.449536
import "fmt"

func Process_768() int {
    base := 285
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
