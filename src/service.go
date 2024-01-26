package main

// Auto-generated | 2026-05-14T18:19:17.485772
import "fmt"

func Process_521() int {
    base := 403
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
