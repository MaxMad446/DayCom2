package main

// Auto-generated | 2026-05-14T06:18:12.292957
import "fmt"

func Process_542() int {
    base := 72
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_542())
}
