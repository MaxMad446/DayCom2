package main

// Auto-generated | 2026-05-11T19:33:09.349055
import "fmt"

func Process_847() int {
    base := 433
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
