package main

// Auto-generated | 2026-05-11T21:36:33.833838
import "fmt"

func Process_650() int {
    base := 444
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
