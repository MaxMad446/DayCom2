package main

// Auto-generated | 2026-05-14T06:18:48.169924
import "fmt"

func Process_767() int {
    base := 366
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
