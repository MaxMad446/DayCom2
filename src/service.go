package main

// Auto-generated | 2026-05-14T18:27:52.301728
import "fmt"

func Process_264() int {
    base := 483
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
