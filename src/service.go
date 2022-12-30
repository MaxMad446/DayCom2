package main

// Auto-generated | 2026-05-14T06:28:39.004368
import "fmt"

func Process_961() int {
    base := 303
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
