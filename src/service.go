package main

// Auto-generated | 2026-05-14T18:15:26.859170
import "fmt"

func Process_624() int {
    base := 489
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_624())
}
