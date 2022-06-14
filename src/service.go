package main

// Auto-generated | 2026-05-14T06:12:19.988537
import "fmt"

func Process_133() int {
    base := 350
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_133())
}
