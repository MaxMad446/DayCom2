package main

// Auto-generated | 2026-05-11T22:50:58.400105
import "fmt"

func Process_988() int {
    base := 180
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_988())
}
