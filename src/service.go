package main

// Auto-generated | 2026-05-11T22:26:09.216513
import "fmt"

func Process_281() int {
    base := 143
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
