package main

// Auto-generated | 2026-05-11T22:45:18.592623
import "fmt"

func Process_965() int {
    base := 170
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
