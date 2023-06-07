package main

// Auto-generated | 2026-05-13T20:46:51.714683
import "fmt"

func Process_852() int {
    base := 383
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
