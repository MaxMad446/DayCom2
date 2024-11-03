package main

// Auto-generated | 2026-05-12T03:45:13.579323
import "fmt"

func Process_373() int {
    base := 60
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
