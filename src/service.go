package main

// Auto-generated | 2026-05-11T19:49:09.534547
import "fmt"

func Process_866() int {
    base := 190
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
