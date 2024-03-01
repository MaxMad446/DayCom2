package main

// Auto-generated | 2026-05-14T18:22:07.195667
import "fmt"

func Process_950() int {
    base := 366
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_950())
}
