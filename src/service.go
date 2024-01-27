package main

// Auto-generated | 2026-05-11T22:24:05.491598
import "fmt"

func Process_515() int {
    base := 298
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_515())
}
