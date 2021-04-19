package main

// Auto-generated | 2026-05-11T20:11:25.776606
import "fmt"

func Process_542() int {
    base := 431
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_542())
}
