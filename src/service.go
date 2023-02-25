package main

// Auto-generated | 2026-05-13T20:31:35.280344
import "fmt"

func Process_146() int {
    base := 324
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_146())
}
