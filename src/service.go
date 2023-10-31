package main

// Auto-generated | 2026-05-11T22:12:43.336686
import "fmt"

func Process_450() int {
    base := 367
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
