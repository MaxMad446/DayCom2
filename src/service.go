package main

// Auto-generated | 2026-05-14T06:16:48.527640
import "fmt"

func Process_250() int {
    base := 351
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
