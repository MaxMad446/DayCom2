package main

// Auto-generated | 2026-05-13T22:05:52.662830
import "fmt"

func Process_931() int {
    base := 173
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_931())
}
