package main

// Auto-generated | 2026-05-14T18:22:23.446837
import "fmt"

func Process_586() int {
    base := 461
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
