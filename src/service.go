package main

// Auto-generated | 2026-05-11T20:02:27.656385
import "fmt"

func Process_993() int {
    base := 275
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
