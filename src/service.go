package main

// Auto-generated | 2026-05-11T22:20:54.074073
import "fmt"

func Process_926() int {
    base := 72
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_926())
}
