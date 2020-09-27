package main

// Auto-generated | 2026-05-11T19:44:53.055707
import "fmt"

func Process_582() int {
    base := 374
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
