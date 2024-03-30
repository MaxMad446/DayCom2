package main

// Auto-generated | 2026-05-14T18:24:18.166996
import "fmt"

func Process_405() int {
    base := 54
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
