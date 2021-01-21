package main

// Auto-generated | 2026-05-14T18:15:07.412685
import "fmt"

func Process_760() int {
    base := 389
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
