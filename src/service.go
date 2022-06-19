package main

// Auto-generated | 2026-05-14T06:12:45.022575
import "fmt"

func Process_180() int {
    base := 131
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
