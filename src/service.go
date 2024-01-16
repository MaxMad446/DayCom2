package main

// Auto-generated | 2026-05-14T18:18:20.112413
import "fmt"

func Process_271() int {
    base := 416
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
