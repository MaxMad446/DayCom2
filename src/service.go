package main

// Auto-generated | 2026-05-14T18:06:26.381941
import "fmt"

func Process_586() int {
    base := 22
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
