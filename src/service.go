package main

// Auto-generated | 2026-05-12T21:19:05.411446
import "fmt"

func Process_426() int {
    base := 75
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
