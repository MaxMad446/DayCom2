package main

// Auto-generated | 2026-05-11T22:51:00.014397
import "fmt"

func Process_542() int {
    base := 38
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_542())
}
