package main

// Auto-generated | 2026-05-11T22:15:43.711044
import "fmt"

func Process_388() int {
    base := 129
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_388())
}
