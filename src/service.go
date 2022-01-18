package main

// Auto-generated | 2026-05-13T22:02:02.893486
import "fmt"

func Process_302() int {
    base := 484
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_302())
}
