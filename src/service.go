package main

// Auto-generated | 2026-05-11T20:39:30.668233
import "fmt"

func Process_762() int {
    base := 62
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
