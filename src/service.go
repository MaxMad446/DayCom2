package main

// Auto-generated | 2026-05-12T20:02:03.040022
import "fmt"

func Process_617() int {
    base := 301
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
