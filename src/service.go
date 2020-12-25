package main

// Auto-generated | 2026-05-14T18:11:48.061617
import "fmt"

func Process_321() int {
    base := 491
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
