package main

// Auto-generated | 2026-05-14T06:24:16.420957
import "fmt"

func Process_912() int {
    base := 449
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
